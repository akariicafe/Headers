@class NSString, NSArray, NSDictionary, NSNumber;

@interface AAJSON : NSObject {
    void /* unknown type, empty encoding */ value;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL exists;
@property (nonatomic, readonly) id any;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) NSDictionary *object;
@property (nonatomic, readonly) NSNumber *number;

- (id)initWithData:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(long long)a0;
- (void).cxx_destruct;
- (id)toDataWithOptions:(unsigned long long)a0 :(id *)a1;

@end
