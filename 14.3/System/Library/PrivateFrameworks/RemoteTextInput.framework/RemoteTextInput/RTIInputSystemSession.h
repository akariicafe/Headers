@class NSUUID, RTIDocumentState, RTIDocumentTraits, NSHashTable, RTITextOperations;
@protocol RTIInputSystemSessionDelegate;

@interface RTIInputSystemSession : NSObject

@property (retain, nonatomic) NSHashTable *extraSessionDelegates;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTITextOperations *textOperations;
@property (readonly, nonatomic) RTITextOperations *_textOperations;
@property (weak, nonatomic) id<RTIInputSystemSessionDelegate> sessionDelegate;

- (void).cxx_destruct;
- (void)flushOperations;
- (void)addSessionDelegate:(id)a0;
- (void)_applyLocalTextOperations:(id)a0 toDocumentState:(id)a1;
- (void)enumerateSessionDelegatesUsingBlock:(id /* block */)a0;
- (void)_createTextOperationsIfNecessary;
- (void)applyLocalTextOperations:(id)a0 toDocumentState:(id)a1;
- (void)removeSessionDelegate:(id)a0;

@end
