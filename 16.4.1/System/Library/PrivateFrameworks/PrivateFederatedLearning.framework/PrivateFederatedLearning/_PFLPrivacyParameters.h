@class NSString;

@interface _PFLPrivacyParameters : NSObject {
    NSString *_identifier;
}

@property (nonatomic) double rho;
@property (nonatomic) double precision;
@property (nonatomic) double minCDProduct;
@property (nonatomic) long long maxRejection;
@property (nonatomic) double normmax;
@property (nonatomic) unsigned long long dimension;
@property (nonatomic) double reconstructionProbability;
@property (nonatomic) double epsilon;
@property (nonatomic) BOOL shouldUseCustomEpsilon;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)populateFromDefaultFile;
- (BOOL)populateFromFile:(id)a0;

@end
