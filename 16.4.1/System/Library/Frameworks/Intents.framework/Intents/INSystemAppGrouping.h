@class NSString, NSArray;

@interface INSystemAppGrouping : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *iOS;
@property (retain, nonatomic) NSString *macOS;
@property (retain, nonatomic) NSArray *watchOS;

+ (id)groupingForKey:(id)a0 iOS:(id)a1 macOS:(id)a2 watchOS:(id)a3;

- (void).cxx_destruct;

@end
