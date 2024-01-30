@class NSString, NSData;

@interface NEDNSQuery : NSObject

@property (readonly) NSString *name;
@property (readonly) long long recordType;
@property (readonly) long long recordClass;
@property (copy) NSData *answerData;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 recordType:(long long)a1 recordClass:(long long)a2;

@end
