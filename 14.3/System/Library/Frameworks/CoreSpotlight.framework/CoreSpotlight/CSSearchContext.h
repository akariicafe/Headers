@class NSString, NSArray, NSObject;
@protocol OS_xpc_object;

@interface CSSearchContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long queryID;
@property (readonly) NSString *userQuery;
@property (readonly) unsigned long long maxItemsCount;
@property (readonly) NSString *keyboardLanguage;
@property (readonly) NSArray *preferredLanguages;
@property (readonly) NSString *markedText;
@property (readonly) unsigned long long markedTextStart;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryID:(unsigned long long)a0 userQuery:(id)a1 maxItemsCount:(unsigned long long)a2 keyboardLanguage:(id)a3 preferredLanguages:(id)a4 markedText:(id)a5 markedTextStart:(unsigned long long)a6;
- (id)initWithQueryID:(unsigned long long)a0 userQuery:(id)a1 maxItemsCount:(unsigned long long)a2 keyboardLanguage:(id)a3 preferredLanguages:(id)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
