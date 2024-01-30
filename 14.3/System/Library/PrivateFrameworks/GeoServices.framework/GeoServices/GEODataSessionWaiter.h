@class GEODataSessionTask, NSString, GEODataSession;

@interface GEODataSessionWaiter : NSObject <GEODataSessionTaskDelegate> {
    id _strongReferenceToSelf;
}

@property (retain, nonatomic) GEODataSession *session;
@property (retain, nonatomic) GEODataSessionTask *task;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
