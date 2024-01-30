@class NSString, NSArray, PXGadgetSectionHeader, PXGadgetSpec;

@interface PXGadgetSection : NSObject {
    long long _changeCount;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *gadgets;
@property (readonly, nonatomic) PXGadgetSectionHeader *sectionHeader;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 gadgets:(id)a1;
- (id)description;

@end
