@class NSString, MFDAMessageStore, MFError, NSData;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer>

@property (readonly, nonatomic) BOOL succeeded;
@property (retain, nonatomic) MFError *error;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) MFDAMessageStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleResponse:(id)a0 error:(id)a1;
- (BOOL)wantsData;

@end
