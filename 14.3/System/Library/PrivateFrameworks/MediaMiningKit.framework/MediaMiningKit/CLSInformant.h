@class NSString;

@interface CLSInformant : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)identifier;
+ (id)supportedOutputClueKeys;

- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
