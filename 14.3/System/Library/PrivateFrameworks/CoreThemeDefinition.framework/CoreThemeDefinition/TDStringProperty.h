@class NSString;

@interface TDStringProperty : TDProperty {
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *stringValue;

- (void)dealloc;
- (void)addToDictionary:(id)a0;

@end
