@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {
    struct shared_ptr<vision::mod::FaceClustering> { struct FaceClustering *__ptr_; struct __shared_weak_count *__cntrl_; } m_ClusteringImpl;
}

- (id)initWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getClustersWithOptions:(id)a0 error:(id *)a1;
- (long long)_cancellableUpdate:(void *)a0 facesToMove:(void *)a1 requestRevision:(unsigned long long)a2;

@end
