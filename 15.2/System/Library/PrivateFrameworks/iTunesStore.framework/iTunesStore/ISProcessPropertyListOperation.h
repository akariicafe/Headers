@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {
    NSDictionary *_propertyList;
}

@property (retain) ISPropertyListProvider *dataProvider;

- (id)initWithPropertyList:(id)a0;
- (void)run;
- (void)dealloc;

@end
