@class NSString;

@interface PXMetadataDisplayItem : NSObject

@property (retain, nonatomic) id content;
@property (retain, nonatomic) NSString *accessibilityDescription;
@property (readonly, nonatomic) NSString *accessoryImageSystemName;
@property (readonly, nonatomic) NSString *accessibilityValue;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, getter=isEmpty) BOOL empty;

+ (id)emptyItem;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0 accessibilityDescription:(id)a1 accessibilityValue:(id)a2 accessibilityIdentifier:(id)a3 accessoryImageSystemName:(id)a4;

@end
