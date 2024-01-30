@class NSString;

@interface MapsSuggestionsBaseRunCondition : NSObject <MapsSuggestionsRunCondition> {
    NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
