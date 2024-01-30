@class NSArray, NSURL, NSString;

@interface HDReferenceExtractionRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *resources;
@property (readonly, copy, nonatomic) NSArray *FHIRResourceData;
@property (readonly, copy, nonatomic) NSURL *serverBaseURL;
@property (readonly, nonatomic) NSString *FHIRRelease;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0 FHIRResourceData:(id)a1 serverBaseURL:(id)a2;

@end
