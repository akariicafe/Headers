@class NSURL, NSData, NSDictionary;

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *itemURL;
@property (readonly, copy, nonatomic) NSData *itemData;
@property (readonly, nonatomic) long long numberOfLoops;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) double fadeInDuration;
@property (readonly, nonatomic) double fadeOutDuration;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItemURL:(id)a0 itemData:(id)a1 numberOfLoops:(long long)a2 volume:(float)a3 fadeInDuration:(double)a4 fadeOutDuration:(double)a5 userInfo:(id)a6;

@end
