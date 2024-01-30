@class NSString, WFEmailAddress, EMDaemonInterface, NSArray, NSData;

@interface WFEmail : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMDaemonInterface *interface;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, nonatomic) unsigned long long subjectPrefix;
@property (readonly, nonatomic) WFEmailAddress *sender;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSData *identifier;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 accountIdentifier:(id)a1 subject:(id)a2 sender:(id)a3 recipients:(id)a4;
- (void)fetchAttachmentsWithCompletionHandler:(id /* block */)a0;
- (void)fetchContentRepresentationWithCompletionHandler:(id /* block */)a0;

@end
