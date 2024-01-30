@class NSString;

@interface MapsSuggestionsBaseCondition : NSObject <MapsSuggestionsCondition> {
    NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTrue;
- (id)nameForJSON;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)objectForJSON;

@end
