@class NSString, NSMutableArray, NSMutableString;

@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    NSMutableString *_formattedText;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isFinal;
@property (readonly, nonatomic) NSMutableArray *segments;
@property (readonly, nonatomic) NSString *formattedText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addSegment:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUtteranceNumber:(unsigned int)a0 updateNumber:(unsigned int)a1 isLocal:(BOOL)a2 isFinal:(BOOL)a3;

@end
