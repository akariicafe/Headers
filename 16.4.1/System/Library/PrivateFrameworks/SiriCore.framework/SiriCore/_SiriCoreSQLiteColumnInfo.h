@class NSString;
@protocol SiriCoreSQLiteValue;

@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn>

@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isPrimaryKey;
@property (readonly, nonatomic) BOOL isNotNull;
@property (readonly, copy, nonatomic) id<SiriCoreSQLiteValue> defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 type:(id)a2 isPrimaryKey:(BOOL)a3 isNotNull:(BOOL)a4 defaultValue:(id)a5;

@end
