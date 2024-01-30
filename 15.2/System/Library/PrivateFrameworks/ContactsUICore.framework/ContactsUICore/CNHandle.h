@class NSString;

@interface CNHandle : NSObject <CNHandle>

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tuHandleForHandle:(id)a0;
+ (unsigned long long)handleTypeForPropertyKey:(id)a0;
+ (id)inPersonHandleForHandle:(id)a0;
+ (id)keyTypeMapping;
+ (long long)tuHandleTypeFromType:(unsigned long long)a0;
+ (id)tuHandleTypeMap;
+ (long long)inPersonHandleTypeForType:(unsigned long long)a0;
+ (id)inPersonHandleTypeMap;
+ (long long)geminiHandleTypeForType:(unsigned long long)a0;
+ (id)geminiHandleTypeMap;
+ (id)geminiHandleForHandle:(id)a0;

- (id)initWithStringValue:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0 customIdentifier:(id)a1 type:(unsigned long long)a2;

@end
