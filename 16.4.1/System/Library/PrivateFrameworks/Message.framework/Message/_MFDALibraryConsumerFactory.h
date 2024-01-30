@class MFMessage, NSString, MFMailMessageLibrary;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>

@property (retain, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) MFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataConsumerForPart:(id)a0;

@end
