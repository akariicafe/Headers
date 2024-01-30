@class NSString, NSDictionary, NSDate, OSALog, NSError;

@interface PCCJob : NSObject {
    OSALog *_package;
    NSError *_errObj;
}

@property (readonly) NSString *jid;
@property (readonly) NSString *target;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *nextFilepath;
@property (readonly) NSDictionary *metadata;
@property (readonly) id result;
@property (readonly) NSDate *lastTouch;
@property (readonly) NSString *type;
@property (readonly) NSString *event;

- (void).cxx_destruct;
- (id)description;
- (id)initWithID:(id)a0 forTarget:(id)a1 options:(id)a2;
- (void)packageLog:(id)a0 forRouting:(id)a1 info:(id)a2 options:(id)a3;
- (id)initWithID:(id)a0 forTarget:(id)a1 options:(id)a2 forFile:(id)a3;
- (void)registerResult:(BOOL)a0 error:(id)a1;

@end
