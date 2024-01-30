@class NSData, NSString;

@interface GEOCapturedState : NSObject <NSKeyedArchiverDelegate, NSSecureCoding>

@property (class, readonly) const char *decoderType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *stateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromStateData:(id)a0;

- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
