@class NSString, NSSecurityScopedURLWrapper, NSData, NSError;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying>

@property (copy, nonatomic) NSString *archivedObjectClassName;
@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) NSSecurityScopedURLWrapper *urlWrapper;
@property (copy, nonatomic) id /* block */ cleanupHandler;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) Class archivedObjectClass;
@property (nonatomic) BOOL wasOpenedInPlace;

+ (id)resultWithError:(id)a0;
+ (id)resultWithData:(id)a0 urlWrapper:(id)a1 cleanupHandler:(id /* block */)a2 error:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithData:(id)a0 urlWrapper:(id)a1 cleanupHandler:(id /* block */)a2 error:(id)a3;

@end
