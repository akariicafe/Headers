@class NSString;

@interface CLSInformant : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)identifier;
+ (id)familyIdentifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)supportedOutputClueKeys;

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
