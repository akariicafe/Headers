@class CNCache, NSArray, NSDictionary;

@interface CNContactHandleStringIndexer : NSObject

@property (readonly, nonatomic) CNCache *indexImpl;
@property (readonly, nonatomic) NSArray *targetHandleStrings;
@property (readonly, nonatomic) NSDictionary *index;

+ (id)indexByMatchingIndexWithRawHandles:(id)a0 toTargetHandleStrings:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)indexContact:(id)a0;
- (void)indexContacts:(id)a0;
- (void)indexEmailAddressesOnContact:(id)a0;
- (void)indexPhoneNumbersOnContact:(id)a0;
- (id)indexWithRawHandles;
- (id)initWithTargetHandleStrings:(id)a0;

@end
