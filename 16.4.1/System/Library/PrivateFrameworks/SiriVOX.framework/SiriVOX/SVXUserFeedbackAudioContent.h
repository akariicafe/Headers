@class NSURL;

@interface SVXUserFeedbackAudioContent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *itemURL;
@property (readonly, nonatomic) unsigned long long numberOfLoops;
@property (readonly, nonatomic) double fadeInDuration;
@property (readonly, nonatomic) double fadeOutDuration;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItemURL:(id)a0 numberOfLoops:(unsigned long long)a1 fadeInDuration:(double)a2 fadeOutDuration:(double)a3;

@end
