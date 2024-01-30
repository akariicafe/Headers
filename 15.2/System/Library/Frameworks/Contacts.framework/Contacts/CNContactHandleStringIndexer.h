@class CNCache, NSArray, NSDictionary;

@interface CNContactHandleStringIndexer : NSObject

@property (readonly, nonatomic) CNCache *indexImpl;
@property (readonly, nonatomic) NSArray *targetHandleStrings;
@property (readonly, nonatomic) NSDictionary *index;

+ (id)indexByMatchingIndexWithRawHandles:(id)a0 toTargetHandleStrings:(id)a1;

- (void)indexContact:(id)a0;
- (void)indexContacts:(id)a0;
- (id)initWithTargetHandleStrings:(id)a0;
- (id)indexWithRawHandles;
- (void)indexPhoneNumbersOnContact:(id)a0;
- (void)indexEmailAddressesOnContact:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
