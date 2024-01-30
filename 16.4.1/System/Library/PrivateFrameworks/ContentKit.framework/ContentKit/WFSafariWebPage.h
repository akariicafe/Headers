@class NSURL, NSString, NSData;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, copy, nonatomic) NSString *selectionText;
@property (readonly, copy, nonatomic) NSData *selectionHTML;
@property (readonly, copy, nonatomic) NSData *documentHTML;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 pageTitle:(id)a1 documentHTML:(id)a2;

@end
