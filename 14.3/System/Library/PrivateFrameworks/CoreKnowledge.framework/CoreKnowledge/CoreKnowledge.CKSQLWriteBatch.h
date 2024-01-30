@interface CoreKnowledge.CKSQLWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch> {
    void /* unknown type, empty encoding */ queue;
}

- (void)writeWithCompletionHandler:(id /* block */)a0;
- (BOOL)writeAndReturnError:(id *)a0;

@end
