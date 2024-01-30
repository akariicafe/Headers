@class NSData, MSOID, NSString;
@protocol MSCMSMessage;

@interface MSCMSContentInfo : NSObject <MSMessage>

@property (retain) NSData *content;
@property (retain) id<MSCMSMessage> embeddedContent;
@property (retain) MSOID *contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

@end
