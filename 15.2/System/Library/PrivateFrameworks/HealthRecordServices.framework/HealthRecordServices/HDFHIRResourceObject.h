@class NSDate, NSURL, HKFHIRIdentifier;

@interface HDFHIRResourceObject : HDFHIRJSONObject

@property (readonly, copy, nonatomic) HKFHIRIdentifier *identifier;
@property (readonly, copy, nonatomic) NSDate *receivedDate;
@property (readonly, copy, nonatomic) NSURL *serverBaseURL;
@property (readonly, nonatomic) unsigned long long extractionHints;

+ (BOOL)supportsSecureCoding;
+ (id)identifierDetectedInJSONObject:(id)a0 error:(id *)a1;
+ (id)identifierWithStaticIdentifier:(id)a0 JSONObject:(id)a1 error:(id *)a2;
+ (id)resourceObjectWithResourceData:(id)a0 receivedDate:(id)a1 extractionHints:(unsigned long long)a2 error:(id *)a3;
+ (id)resourceObjectWithJSONObject:(id)a0 serverBaseURL:(id)a1 FHIRVersion:(id)a2 receivedDate:(id)a3 error:(id *)a4;
+ (id)resourceObjectWithJSONObject:(id)a0 sourceURL:(id)a1 FHIRVersion:(id)a2 receivedDate:(id)a3 extractionHints:(unsigned long long)a4 error:(id *)a5;
+ (id)hrs_sampleResourceObjectWithFHIRResource:(id)a0 error:(id *)a1;
+ (id)hrs_sampleResourceObjectWithFHIRResource:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_initWithResourceIdentifier:(id)a0 JSONObject:(id)a1 sourceURL:(id)a2 FHIRVersion:(id)a3 receivedDate:(id)a4 extractionHints:(unsigned long long)a5;
- (id)copyWithOriginDataFrom:(id)a0;

@end
