@class PXSectionedDataSourceChangeDetails, PXMutableArrayChangeDetails, NSMutableArray;

@interface PXSectionedChangeDetailsCoalescer : NSObject {
    long long _fromDataSourceIdentifier;
    long long _currentToDataSourceIdentifier;
    PXMutableArrayChangeDetails *_sectionChangeDetails;
    NSMutableArray *_itemChangeEntries;
    PXSectionedDataSourceChangeDetails *_cachedResult;
}

@property (readonly, nonatomic) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;

+ (BOOL)_verboseLoggingEnabled;
+ (id)changeDetailsByCoalescingChangeDetails:(id)a0;

- (id)init;
- (void)addChangeDetails:(id)a0;
- (void).cxx_destruct;
- (id)initWithSectionedChangeDetails:(id)a0;

@end
