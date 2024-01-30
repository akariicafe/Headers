@class NSArray, NSString;

@interface HRUITableViewSectionConfiguration : NSObject {
    void /* unknown type, empty encoding */ sections;
}

@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, readonly) NSString *description;

- (long long)numberOfRowsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSection:(id)a0;
- (void)removeAllSections;
- (id)rowAtIndexPath:(id)a0;
- (id)addSectionWithIdentifier:(id)a0 firstRowReuseIdentifier:(id)a1;
- (id)addSectionWithIdentifier:(id)a0 rowReuseIdentifiers:(id)a1;

@end
