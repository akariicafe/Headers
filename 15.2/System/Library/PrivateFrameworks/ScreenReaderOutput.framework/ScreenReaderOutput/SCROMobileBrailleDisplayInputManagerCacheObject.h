@class NSString, NSMutableDictionary, NSBundle, NSMutableArray;

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject

@property (retain, nonatomic) NSString *modelIdentifier;
@property (nonatomic) int brailleInputMode;
@property (retain, nonatomic) NSString *driverIdentifier;
@property (retain, nonatomic) NSMutableDictionary *commandDictionary;
@property (retain, nonatomic) NSMutableArray *orderedIdentifiers;
@property (retain, nonatomic) NSBundle *bundle;

- (void).cxx_destruct;

@end
