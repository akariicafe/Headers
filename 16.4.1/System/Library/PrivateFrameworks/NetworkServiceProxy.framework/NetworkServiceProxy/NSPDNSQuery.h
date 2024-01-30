@class NSString;

@interface NSPDNSQuery : NSObject

@property (readonly) NSString *name;
@property (readonly) long long recordType;
@property (readonly) long long recordClass;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 recordType:(long long)a1 recordClass:(long long)a2;
- (id)copyStateDictionary;

@end
