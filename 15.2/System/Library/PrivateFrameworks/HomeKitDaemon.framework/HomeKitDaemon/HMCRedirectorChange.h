@class NSSet, NSString;

@interface HMCRedirectorChange : HMFObject

@property (readonly) NSSet *updates;
@property (readonly) NSSet *inserts;
@property (readonly) NSSet *deletes;
@property (readonly) NSString *context;
@property (readonly) NSString *author;

- (id)description;
- (void).cxx_destruct;
- (void)dumpForLoggingWithPrefix:(id)a0 logType:(unsigned char)a1;
- (id)initWithContext:(id)a0 inserts:(id)a1 updates:(id)a2 deletes:(id)a3;
- (id)descriptionLines;

@end
