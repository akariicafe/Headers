@class NSString, HDHRSOriginInformation, NSDate;

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject

@property (readonly, copy, nonatomic) NSDate *firstSeenDate;
@property (readonly, copy, nonatomic) HDHRSOriginInformation *originInformation;
@property (readonly, copy, nonatomic) NSString *country;

+ (BOOL)supportsSecureCoding;
+ (id)resourceObjectWithData:(id)a0 sourceURL:(id)a1 FHIRVersion:(id)a2 receivedDate:(id)a3 firstSeenDate:(id)a4 extractionHints:(unsigned long long)a5 originVersion:(struct { long long x0; long long x1; long long x2; })a6 originBuild:(id)a7 country:(id)a8 error:(id *)a9;
+ (id)resourceObjectWithStaticIdentifier:(id)a0 data:(id)a1 sourceURL:(id)a2 FHIRVersion:(id)a3 receivedDate:(id)a4 firstSeenDate:(id)a5 extractionHints:(unsigned long long)a6 originVersion:(struct { long long x0; long long x1; long long x2; })a7 originBuild:(id)a8 country:(id)a9 error:(id *)a10;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_initWithResourceIdentifier:(id)a0 JSONObject:(id)a1 sourceURL:(id)a2 FHIRVersion:(id)a3 receivedDate:(id)a4 firstSeenDate:(id)a5 extractionHints:(unsigned long long)a6 originInformation:(id)a7 country:(id)a8;

@end
