@class NSNumber, NSArray;

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject

@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSArray *matchingShares;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
