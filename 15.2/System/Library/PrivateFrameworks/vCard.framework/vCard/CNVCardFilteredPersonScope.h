@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject

@property (readonly) NSSet *blacklist;
@property (readonly) unsigned long long filterOptions;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithBlacklist:(id)a0 options:(unsigned long long)a1;

@end
