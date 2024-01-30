@class NSString, NSDate;

@interface _ATXCachedClipboardContents : NSObject

@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *originatorBundleId;

- (void).cxx_destruct;
- (id)initWithContent:(id)a0 creationDate:(id)a1 originatorBundleId:(id)a2;

@end
