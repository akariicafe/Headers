@class NSString, NSNumber, NSDate;

@interface TIUserModelDataStoreDurableEntry : NSObject

@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *lastUpdateDate;
@property (readonly) NSString *key;
@property (readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)initWithCreationDate:(id)a0 withLastUpdateDate:(id)a1 withKey:(id)a2 withValue:(id)a3;

@end
