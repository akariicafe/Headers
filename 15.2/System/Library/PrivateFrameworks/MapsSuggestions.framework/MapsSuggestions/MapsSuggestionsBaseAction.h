@class NSString;

@interface MapsSuggestionsBaseAction : NSObject <MapsSuggestionsAction> {
    NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)actWithHandler:(id /* block */)a0;

@end
