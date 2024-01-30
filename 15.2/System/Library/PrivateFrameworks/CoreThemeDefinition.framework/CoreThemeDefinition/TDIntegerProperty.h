@interface TDIntegerProperty : TDProperty {
    long long _integerValue;
}

@property (nonatomic) long long integerValue;

- (void)dealloc;
- (void)addToDictionary:(id)a0;

@end
