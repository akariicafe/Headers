@class NSString, EMListUnsubscribeMailtoValues, EMListUnsubscribePostValues;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, copy, nonatomic) id /* block */ accountFinderBlock;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *listID;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) BOOL isMailtoOperation;
@property (readonly, nonatomic) long long headerUnsubscribeTypes;
@property (readonly, nonatomic) EMListUnsubscribeMailtoValues *mailtoValues;
@property (readonly, nonatomic) EMListUnsubscribePostValues *postValues;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accountWithIdentifier:(id)a0;
+ (id)mailtoUnsubscribeCommandWithListID:(id)a0 address:(id)a1 sender:(id)a2 subject:(id)a3 body:(id)a4 account:(id)a5 headerUnsubscribeTypes:(long long)a6;
+ (id)oneClickUnsubscribeCommandWithListID:(id)a0 sender:(id)a1 URL:(id)a2 postContent:(id)a3 headerUnsubscribeTypes:(long long)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithListID:(id)a0 sender:(id)a1 mailtoValues:(id)a2 postValues:(id)a3 headerUnsubscribeTypes:(long long)a4;

@end
