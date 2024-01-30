@class NSArray, NSString;

@interface HRUITableViewSectionConfiguration : NSObject {
    void /* unknown type, empty encoding */ sections;
}

@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, readonly) NSString *description;

- (long long)numberOfRowsInSection:(long long)a0;
- (void).cxx_destruct;
- (void)removeAllSections;
- (id)init;
- (void)addSection:(id)a0;
- (id)addSectionWithIdentifier:(id)a0 firstRowReuseIdentifier:(id)a1;
- (id)addSectionWithIdentifier:(id)a0 rowReuseIdentifiers:(id)a1;
- (id)rowAtIndexPath:(id)a0;

@end
