@class MSOID, NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSDate *signingTime;
@property (readonly, retain) MSOID *attributeType;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithSigningTime:(id)a0;
- (id)encodeAttributeWithError:(id *)a0;

@end
