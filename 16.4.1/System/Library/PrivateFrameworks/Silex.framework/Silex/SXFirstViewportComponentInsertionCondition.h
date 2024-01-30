@class NSString;

@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition>

@property (nonatomic) BOOL allowFirstViewportException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithAllowFirstViewportException:(BOOL)a0;
- (BOOL)validateMarker:(id)a0 componentTraits:(unsigned long long)a1 layoutProvider:(id)a2;

@end
