@class NSString;

@interface SSConsolidatedDialog : NSObject <SSXPCCoding, NSCopying>

@property (copy) NSString *cancelLabel;
@property (copy) NSString *reason;
@property (copy) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
