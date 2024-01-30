@class NSURL, NSString, NSData;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, WFSerializableContent>

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, copy, nonatomic) NSString *selectionText;
@property (readonly, copy, nonatomic) NSData *selectionHTML;
@property (readonly, copy, nonatomic) NSData *documentHTML;
@property (readonly, copy, nonatomic) NSString *javaScriptRunnerIdentifier;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)webPageFromPreprocessingResult:(id)a0 javaScriptRunnerIdentifier:(id)a1;

@end
