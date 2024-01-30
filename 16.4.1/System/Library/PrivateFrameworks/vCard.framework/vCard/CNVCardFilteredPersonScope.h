@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject

@property (readonly) NSSet *excludedFields;
@property (readonly) unsigned long long filterOptions;
@property (readonly, getter=isEmpty) BOOL empty;

- (void).cxx_destruct;
- (id)initWithExcludedFields:(id)a0 options:(unsigned long long)a1;

@end
