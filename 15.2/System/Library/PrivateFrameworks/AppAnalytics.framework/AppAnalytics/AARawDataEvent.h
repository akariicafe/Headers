@class NSString;

@interface AARawDataEvent : NSObject <AADataEventType> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ dictionary;
}

@property (class, nonatomic, readonly) NSString *dataName;

- (id)toDict;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 dictionary:(id)a1;

@end
