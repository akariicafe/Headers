@class NSString;

@interface CLSProfile : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)supportedMeaningClueKeys;
+ (id)profileDependenciesIdentifiers;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)identifier;

- (id)init;
- (void).cxx_destruct;
- (void)processResultsSynchronouslyForInvestigation:(id)a0 withProgressBlock:(id /* block */)a1;
- (id)uniqueIdentifier;
- (id)description;

@end
